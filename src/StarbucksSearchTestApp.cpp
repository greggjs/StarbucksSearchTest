#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class StarbucksSearchTestApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void StarbucksSearchTestApp::setup()
{
}

void StarbucksSearchTestApp::mouseDown( MouseEvent event )
{
}

void StarbucksSearchTestApp::update()
{
}

void StarbucksSearchTestApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( StarbucksSearchTestApp, RendererGl )
