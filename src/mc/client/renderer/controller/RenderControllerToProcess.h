#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
class RenderController;
// clang-format on

struct RenderControllerToProcess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderController>> mRenderController;
    ::ll::TypedStorage<8, 16, std::weak_ptr<DataDrivenGeometry>> mGeo;
    ::ll::TypedStorage<8, 8, ulong>                              mSortIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerToProcess& operator=(RenderControllerToProcess const&);
    RenderControllerToProcess();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderControllerToProcess(std::shared_ptr<RenderController>, std::weak_ptr<DataDrivenGeometry>, ulong);

    MCNAPI ~RenderControllerToProcess();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<RenderController>, std::weak_ptr<DataDrivenGeometry>, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RenderControllerToProcess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk176ade;
    ::ll::UntypedStorage<8, 16> mUnkabc415;
    ::ll::UntypedStorage<8, 8>  mUnkb50ef8;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerToProcess& operator=(RenderControllerToProcess const&);
    RenderControllerToProcess(RenderControllerToProcess const&);
    RenderControllerToProcess();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RenderControllerToProcess();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct RenderControllerToProcess {};
#endif // @header-generator platform
#endif // @header-generator platform
