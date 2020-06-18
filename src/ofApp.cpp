#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    WIDTH = ofGetWidth();
    HEIGHT = ofGetHeight();
    
    gui.setup();
    gui.add(toggle.setup("SHOW", false));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofVec3f camera_origin = ofVec3f(0.0, 0.0, 0.0);
    ofVec3f screen_origin = ofVec3f(-WIDTH/2.0, -HEIGHT/2.0, -1.0);
    ofVec3f horizontal = ofVec3f(WIDTH, 0.0, 0.0);
    ofVec3f vertical = ofVec3f(0.0, HEIGHT, 0.0);
    
    if (toggle) {
        glBegin(GL_POINTS);
        for (int y = 0; y < HEIGHT; y++) {
            float axisY = float(y)/float(HEIGHT);
            ofVec3f color = backGroundColor(axisY);
            for (int x = 0; x < WIDTH; x++) {
                glColor3f(color.x, color.y, color.z);
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

ofVec3f ofApp::backGroundColor(float axisY){
    return axisY * WHITE + (1 - axisY * 0.5) * QUEEN_BLUE;
}
