#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    vertices.resize(nVert);
    for (int i = 0; i < square; i++)
    {	//Scan all the triangles
        //Generate the center of the triangle
        //as a random point on the sphere
        //Take the random point from
        //cube [-1,1]x[-1,1]x[-1,1]
        ofPoint center( ofRandom(-1, 1), ofRandom(-1, 1), ofRandom(-1, 1));
        center.normalize(); //Normalize vector's length to 1
        center *= Rad;	//Now the center vector has
        //length Rad
        //Generate the triangle's vertices
        //as the center plus random point from
        //[-rad, rad]x[-rad, rad]x[-rad, rad]
        for (int j = 0; j < 4; j++)
            vertices[i * 4
                     + j] = center + ofPoint(ofRandom(-rad, rad), ofRandom(-rad, rad), ofRandom(-rad, rad));
    }
    //Fill the array of triangles' colors
    colors.resize(square);
    for (int i = 0; i < square; i++) {
        //Take a random color from black to red
        colors[i] = ofColor(ofRandom(0, 255),(0, 255),(0, 255));
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableDepthTest();
    ofBackgroundGradient(ofColor::blueSteel,ofColor::paleTurquoise);
    ofPushMatrix();
    ofTranslate(500, 350, -0);
    float time = ofGetElapsedTimef();
    ofRotateY(time*10);
    for(int i = 0;i < square; i++){
        ofSetColor((colors) [i]);
        ofRect(vertices[i * 4],20, 20);
        
    
        
    }
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == ' '){
        colors.resize(square);
        for (int i = 0; i < square; i++) {
            colors[i] = ofColor(ofRandom(0, 255),(i),(0, 255));
        }
    }
    
    

    
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
