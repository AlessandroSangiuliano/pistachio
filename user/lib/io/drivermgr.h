#ifndef DRIVERMGR_H
#define DRIVERMGR_H

class DriverMgr
{
public:
    DriverMgr();

    //Constructor taking L4 thread/page to sit in?

    /* Register a driver by name

      aName
      aType
      aHook
      aSynopsis
      aVersion

bool DriverMgr::RegName(char[20] *aName, int aType, 
 bool (*aHook)(int), char[30] *aSynopsis, char[5] *aVersion

     */

    /* Unregister a driver by name */
    
//bool Validate(int nX, int nY, bool (*pfcn)(int, int));
/* Unregister a driver by ordinal */

    /* Return a list of drivers, types, synopses, versions, and PID/thread IDs */

    /* Return the number of registered drivers, globally */
    L4_Word_t GetDriverCount();

    /* Return the total number of allocated pages, globally */
    L4_Word_t GetPageCount();

private:
    L4_Word_t iDriverCount; //Number of registered drivers
    //The list of drivers (linked list/hash map/table?)
    L4_Word_t iPageCount; //Number of allocated pages?

};

#endif // DRIVERMGR_H
