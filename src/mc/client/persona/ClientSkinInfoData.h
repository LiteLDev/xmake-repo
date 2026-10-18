#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/image/Image.h"
#include "mc/deps/minecraft_renderer/renderer/BedrockTexture.h"
#include "mc/world/actor/player/SkinInfoData.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class SerializedSkinRef;
// clang-format on

class ClientSkinInfoData : public ::SkinInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SubClientId>                mSubClientId;
    ::ll::TypedStorage<8, 48, ::BedrockTexture>            mSkinTexture;
    ::ll::TypedStorage<8, 24, std::vector<BedrockTexture>> mSkinAnimatedTextures;
    ::ll::TypedStorage<8, 48, ::BedrockTexture>            mCapeTexture;
    ::ll::TypedStorage<8, 48, ::mce::Image>                mLodSkinImage;
    ::ll::TypedStorage<8, 48, ::BedrockTexture>            mLodSkinTexture;
    ::ll::TypedStorage<1, 1, bool>                         mValid;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientSkinInfoData& operator=(ClientSkinInfoData const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientSkinInfoData();

    virtual void updateSkin(::SerializedSkinRef const&, ::mce::Image const*, ::mce::Image const*);

    virtual bool hasValidTexture();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientSkinInfoData();

    MCNAPI ::mce::Image const* getCapeImage() const;

    MCNAPI ::BedrockTexture const& getCapeTexture();

    MCNAPI ::mce::Image const* getLodSkinImage() const;

    MCNAPI ::BedrockTexture const& getLodSkinTexture() const;

    MCNAPI std::vector<AnimatedImageData> const& getSkinAnimatedImages() const;

    MCNAPI std::vector<BedrockTexture> const& getSkinAnimatedTextures() const;

    MCNAPI ::mce::Image const* getSkinImage() const;

    MCNAPI ::BedrockTexture const& getSkinTexture();

    MCNAPI void setCapeTexture(::BedrockTexture&&);

    MCNAPI void setLodSkinImage(::mce::Image&&);

    MCNAPI void setLodSkinTexture(::BedrockTexture&&);

    MCNAPI void setSkinAnimatedTextures(std::vector<BedrockTexture>&&);

    MCNAPI void setSkinTexture(::BedrockTexture&&);

    MCNAPI void unload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updateSkin(::SerializedSkinRef const&, ::mce::Image const*, ::mce::Image const*);

    MCNAPI bool $hasValidTexture();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClientSkinInfoData {};
#endif // @header-generator platform
