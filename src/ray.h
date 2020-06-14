#ifndef ray_h
#define ray_h
#include "ofMain.h"

class ray
{
    public:
        ray() {}
        ray(const ofVec3f& start, const ofVec3f& end) { _start = start; _end = end; }
        ofVec3f origin() const { return _start; }
        ofVec3f direction() const { return _end; }
        ofVec3f pointAt(float t) const { return _start + t * _end; }
    
        ofVec3f _start;
        ofVec3f _end;
};

#endif /* ray_h */
