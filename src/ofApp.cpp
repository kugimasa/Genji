#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    WIDTH = ofGetWidth();
    HEIGHT = ofGetHeight();
    
    gui.setup();
    gui.add(toggle.setup("SHOW", false));
    gui.add(brightnessSlider.setup("BRIGHTNESS", 0.5, 0.0, 1.0));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofVec3f camera_origin = ofVec3f(0.0, 0.0, 0.0);
    ofVec3f screen_origin = ofVec3f(2.0, 1.0, -1.0);
    ofVec3f horizontal = ofVec3f(4.0, 0.0, 0.0);
    ofVec3f vertical = ofVec3f(0.0, 2.0, 0.0);
    
    if (toggle) {
        glBegin(GL_POINTS);
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                float u = float(x) / float(WIDTH);
                float v = float(y) / float(HEIGHT);
                ray ray(camera_origin, screen_origin + u * horizontal + v * vertical);
                ofVec3f c = color(ray);
                float r = c.x;
                float g = c.y;
                float b = c.z;
                glColor3f(r, g, b);
                glVertex2i(x, y);
            }
        }
        glEnd();
    }
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

ofVec3f ofApp::color(const ray &r){
    ofVec3f unit = r.direction().normalize();
    float t = 0.5 * (unit.y + 1.0);
    return (1.0 - t) * ofVec3f(1.0, 1.0, 1.0) + t * ofVec3f(0.0, 0.0, 1.0);
}
