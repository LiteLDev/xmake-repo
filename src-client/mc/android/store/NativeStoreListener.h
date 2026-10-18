#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"

// auto generated forward declare list
// clang-format off
class StoreListener;
struct ProductInfo;
struct ProductSku;
struct PurchaseInfo;
// clang-format on

class NativeStoreListener : public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>            mListener;
    ::ll::TypedStorage<8, 8, ::_jobject*> mJavaInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeStoreListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NativeStoreListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
