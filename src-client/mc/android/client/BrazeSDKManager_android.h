#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"
#include "mc/client/BrazeSDKManager.h"

class BrazeSDKManager_android : public ::BrazeSDKManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrazeSDKManager_android();

    virtual void enableBrazeSDK();

    virtual void disableBrazeSDK();

    virtual void setBrazeId(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _initializeBrazeManagerObject();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void ConnectBrazeSDKJNI(::_jclass*, ::_JavaVM*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $enableBrazeSDK();

    MCNAPI void $disableBrazeSDK();

    MCNAPI void $setBrazeId(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
