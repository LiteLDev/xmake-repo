#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IUIRepository;
class UITextureInfo;
// clang-format on

class UITextureInfoPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UITextureInfo const*> mUITextureInfo;
    ::ll::UntypedStorage<8, 24>                      mGroup;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>    mResourceLocation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UITextureInfoPtr();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::UITextureInfoPtr& _move(::UITextureInfoPtr&&);

    MCNAPI ::UITextureInfo const* getUITextureInfo() const;

    MCNAPI explicit operator bool() const;

    MCNAPI ::UITextureInfoPtr& operator=(::UITextureInfoPtr&&);
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
