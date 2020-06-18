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

// Color data

static ofVec3f BLACK = ofVec3f(0.0, 0.0, 0.0);
static ofVec3f GREY = ofVec3f(0.5, 0.5, 0.5);
static ofVec3f WHITE = ofVec3f(1.0, 1.0, 1.0);
static ofVec3f RED = ofVec3f(1.0, 0.0, 0.0);
static ofVec3f GREEN = ofVec3f(0.0, 1.0, 0.0);
static ofVec3f BLUE = ofVec3f(0.0, 0.0, 1.0);
static ofVec3f CANDY_PINK = ofVec3f(239.0 / 255.0, 118.0 / 255.0, 122.0 / 255.0);
static ofVec3f QUEEN_BLUE = ofVec3f(69.0 / 255.0, 105.0 / 255.0, 144.0 / 255.0);
static ofVec3f MEDIUM_AQUAMARIN = ofVec3f(73.0 / 255.0, 220.0 / 255.0, 117.0 / 255.0);
static ofVec3f SUNRAY = ofVec3f(238.0 / 255.0, 184.0 / 255.0, 104.0 / 255.0);

#endif /* ray_h */
