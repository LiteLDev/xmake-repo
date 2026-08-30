#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/PersonaAppearance.h"
#include "mc/client/persona/SkinHandle.h"
#include "mc/platform/UUID.h"

namespace persona {

struct DefaultAppearance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>  mName;
    ::ll::TypedStorage<8, 16, ::mce::UUID>  mUUID;
    ::ll::TypedStorage<8, 24, std::string>  mThumbnailPath;
    ::ll::TypedStorage<8, 96, ::SkinHandle> mSkinHandle;
    ::ll::UntypedStorage<8, 952>            mAppearance;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultAppearance& operator=(DefaultAppearance const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefaultAppearance(::persona::DefaultAppearance const&);

    MCNAPI explicit operator const PersonaAppearance&() const;

    MCNAPI ~DefaultAppearance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::persona::DefaultAppearance const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace persona
