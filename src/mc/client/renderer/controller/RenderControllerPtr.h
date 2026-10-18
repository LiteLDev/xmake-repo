#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
class RenderController;
class RenderControllerGroup;
class RenderControllerInfo;
// clang-format on

class RenderControllerPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderControllerInfo>> mRenderControllerInfoPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderControllerPtr(::RenderControllerGroup&, ::HashedString const&);

    MCNAPI ::RenderController getCopyOfContainedRenderController() const;

    MCNAPI ::HashedString const& getName() const;

    MCNAPI bool isNull() const;

    MCNAPI ::RenderController const* operator->() const;

    MCNAPI ::RenderController* operator->();

    MCNAPI ~RenderControllerPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::RenderControllerPtr const& NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RenderControllerGroup&, ::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
class RenderControllerGroup;
// clang-format on

class RenderControllerPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb5dcd0;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerPtr& operator=(RenderControllerPtr const&);
    RenderControllerPtr(RenderControllerPtr const&);
    RenderControllerPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderControllerPtr(::RenderControllerGroup& group, ::HashedString const& name);

    MCNAPI ~RenderControllerPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::RenderControllerPtr const& NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RenderControllerGroup& group, ::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class RenderControllerPtr {};
#endif // @header-generator platform
#endif // @header-generator platform
