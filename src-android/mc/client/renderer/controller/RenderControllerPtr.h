#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
