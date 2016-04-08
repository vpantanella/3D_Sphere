#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
private:
    vector<ofPoint> vertices;
    vector<ofColor> colors;
    int square=1500;
    int nVert= 4* square;
    float Rad = 300;
    float rad = 25;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
