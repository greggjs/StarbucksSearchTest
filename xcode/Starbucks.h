//
//  Starbucks.h
//  StarbucksSearchTest
//
//  Created by Jake Gregg on 10/15/12.
//
//

#ifndef StarbucksSearchTest_Starbucks_h
#define StarbucksSearchTest_Starbucks_h

#import "Entry.h"
#import "cinder/app/AppBasic.h"

class Starbucks {
public:
	/*
	 * add all entries in the array to your data structure
	 *
	 * The "c" parameter is a pointer to an array of all the entries to be added, and n is the length of
	 * the array.
	 *
	 * Note: If you detect that two items have the same coordinates, then do not add the new item
	 *       that has the same coordinates as another item. This is guaranteed to happen, by the way,
	 *       because some Starbucks locations are listed in the database twice. We will define two locations
	 *       to be the "same location" if both |x1 - x2| <= 0.00001 and |y1 - y2| < 0.00001
	 */
	virtual void build(Entry* c, int n) = 0;
	
	/*
	 * Return a pointer to the entry that is closest to the given coordinates. Your
	 *  answer may be approximate, but then you will lose points on the "Accuracy" quality measure
	 */
	virtual Entry* getNearest(double x, double y) = 0;
};

#endif
