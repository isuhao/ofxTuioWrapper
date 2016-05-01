#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(200, 200, 200);
	ofSetVerticalSync(true);
	
	//Connect to Port
	myTuio.connect(3333);
	
	//Assign Global TUIO Callback Functions
	ofAddListener(ofEvents().touchDown,this,&ofApp::touchDown);
	ofAddListener(ofEvents().touchUp,this,&ofApp::touchUp);
	ofAddListener(ofEvents().touchMoved,this,&ofApp::touchMoved);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	//render TUIO Cursors and Objects
	myTuio.drawCursors();
	myTuio.drawObjects();
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
void ofApp::windowResized(int w, int h){

}


void ofApp::touchDown(ofTouchEventArgs & touch){
	cout << " cursor added: " + ofToString(touch.id)+
	" X: "+ofToString(touch.x)+
	" Y: "+ofToString(touch.y)
	<< endl;

	
}

void ofApp::touchUp(ofTouchEventArgs & touch){
	cout << " cursor removed: " + ofToString(touch.id)+
	 " X: "+ofToString(touch.x)+
	 " Y: "+ofToString(touch.y)
	 << endl;
	
}

void ofApp::touchMoved(ofTouchEventArgs & touch){
	cout << " cursor updated: " + ofToString(touch.id)+
	 " X: "+ofToString(touch.x)+
	 " Y: "+ofToString(touch.y)
	 << endl;
}

