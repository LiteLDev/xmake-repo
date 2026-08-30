#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/ItemContextFlags.h"
#include "mc/deps/minecraft_renderer/game/MaterialRequirements.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

class ItemRenderCall {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                mItemId;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>      mChunk;
    ::ll::TypedStorage<4, 4, float>              mScale;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mTexture;
    ::ll::TypedStorage<1, 1, bool>               mIsFlat;
    ::ll::TypedStorage<1, 1, bool>               mNeedsColor;
    ::ll::TypedStorage<1, 1, bool>               mNeedsAlphaTest;
    ::ll::TypedStorage<1, 1, bool>               mNeedsBlending;
    ::ll::TypedStorage<1, 1, bool>               mEmissive;
    ::ll::TypedStorage<1, 1, bool>               mIsSingleSided;
    ::ll::TypedStorage<1, 1, bool>               mAlphaMaskedTint;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRenderCall& operator=(ItemRenderCall const&);
    ItemRenderCall(ItemRenderCall const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemRenderCall();

    MCNAPI ::MaterialRequirements getMaterialRequirements() const;

    MCNAPI ::ItemRenderCall& operator=(::ItemRenderCall&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isInvalid(::ItemRenderCall const* const, ::ItemContextFlags const, bool const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
