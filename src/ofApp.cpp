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
    if (toggle) {
        glBegin(GL_POINTS);
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                float r = float(x) / float(HEIGHT) * brightnessSlider;
                float g = float(y) / float(WIDTH) * brightnessSlider;
                float b = float(x + y) / float(HEIGHT + WIDTH) * brightnessSlider;
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
