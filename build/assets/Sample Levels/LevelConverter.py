# -*- coding: utf-8 -*-
"""
Created on Thu Apr  9 17:07:35 2015

@author: duncan
"""

import yaml
import xml.etree.cElementTree as ET

tree = ET.parse('DemoLevel.tmx')
root = tree.getroot()

node = root.find('layer')

mapWidth = int(node.attrib['width'])
mapHeight = int(node.attrib['height'])

node = node.find('data')

locationData = list()

for y in range(0, mapHeight):
    for x in range(0, mapWidth):
        entityId = y * mapWidth + x
        xCord = x * 32
        yCord = y * 32
        locationData.append({'id' : entityId,
                             'x' : xCord,
                             'y' : yCord,
                             'angle' : 0.0})
                             
yaml.dump(locationData, file('Demo Map Location Components.yaml', 'w'))

textureData = list()

objId = 0

for child in node:
    tileNum = int(child.attrib['gid'])
    
    if(tileNum % 16 == 0):
        texX = 15
        texY = tileNum / 16 - 1
    else:
        texX = (tileNum % 16) - 1
        texY = tileNum / 16
        
    textureData.append({'id' : objId,
                        'sheet' : 0,
                        'textureX' : texX,
                        'textureY' : texY})
    objId += 1
                        
yaml.dump(textureData, file('Demo Map Texture Components.yaml', 'w'))