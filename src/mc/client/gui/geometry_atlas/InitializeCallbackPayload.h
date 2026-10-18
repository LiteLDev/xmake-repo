#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/InitializeStatus.h"
#include "mc/platform/brstd/move_only_function.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/InitializeStatus.h"
#include "mc/platform/brstd/move_only_function.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class InitializeCallbackPayload {
public:
    // InitializeCallbackPayload inner types define
    using Callback = ::brstd::move_only_function<void(GeometryAtlas::InitializeStatus)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mCallback;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class InitializeCallbackPayload {
public:
    // InitializeCallbackPayload inner types define
    using Callback = ::brstd::move_only_function<void(::GeometryAtlas::InitializeStatus)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::GeometryAtlas::InitializeStatus)>> mCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~InitializeCallbackPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class InitializeCallbackPayload {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
