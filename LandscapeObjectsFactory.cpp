#include "LandscapeObjectsFactory.h"

vector<LandscapeObjectType*> LandscapeObjectsFactory::objectTypes = vector<LandscapeObjectType*>();

LandscapeObjectType* LandscapeObjectsFactory::getObject(string path, int colour) {
	vector<LandscapeObjectType*>::iterator object = find_if(objectTypes.begin(), objectTypes.end(),
		[path, colour](LandscapeObjectType* obj) {return obj->colour == colour && obj->path == path; });
	if (object != objectTypes.end())
		return *object;
	else
	{
		LandscapeObjectType* newObject = new LandscapeObjectType(path, colour);
		return newObject;
	}
}