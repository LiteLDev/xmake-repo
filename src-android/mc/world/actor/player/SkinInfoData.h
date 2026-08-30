#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/SerializedSkinRef.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { struct Image; }
// clang-format on

class SkinInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>         mDefaultMeshName;
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef> mSkin;
    ::ll::TypedStorage<1, 1, bool>                 mIsAlphaTest;
    ::ll::TypedStorage<1, 1, bool>                 mIsDirty;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinInfoData();

    virtual void updateSkin(::SerializedSkinRef const&, ::mce::Image const*, ::mce::Image const*) = 0;

    virtual bool hasValidTexture() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SerializedSkinRef const& getSkin() const;

    MCNAPI ::SerializedSkinRef& getSkinMutable();

    MCNAPI std::string const& getSkinName() const;

    MCNAPI bool isDirty() const;

    MCNAPI void setClean();
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
