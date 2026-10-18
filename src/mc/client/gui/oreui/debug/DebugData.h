#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/debug/FrameDebugData.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/debug/FrameDebugData.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct DebugData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::OreUI::FrameDebugData> mFrameDebugData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebugData();
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
#if defined(LL_PLAT_C) // @header-generator platform
struct DebugData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::OreUI::FrameDebugData> mFrameDebugData;
    // NOLINTEND
};
#else // @header-generator platform
struct DebugData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
