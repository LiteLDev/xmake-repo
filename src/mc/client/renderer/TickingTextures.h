#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/ptexture/FlipbookTexture.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class FrameUpdateContext;
class Tessellator;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class FlipbookTexture;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class TickingTextures {
public:
    // TickingTextures inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // TickingTextures inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<FlipbookTexture>>> mTickingTextures;
        ::ll::UntypedStorage<8, 24>                                              mTextureLocations;
        // NOLINTEND
    };

    using TickingTextureLoader = ::brstd::function_ref<void(FlipbookTexture&) const, void(FlipbookTexture&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TickingTextures::Impl>> mImpl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TickingTextures();

    MCNAPI void _addTickingTexture(
        std::unique_ptr<FlipbookTexture>&&,
        ::brstd::function_ref<void(FlipbookTexture&) const, void(FlipbookTexture&)>
    );

    MCNAPI void addTickingTexture(std::unique_ptr<FlipbookTexture>&&, ::Tessellator&);

    MCNAPI void frameUpdate(::FrameUpdateContext&);

    MCNAPI ::FlipbookTexture const* getTickingTexture(ulong const) const;

    MCNAPI ulong getTickingTextureCount() const;

    MCNAPI bool isTickingTexture(::ResourceLocation const&) const;

    MCNAPI void reloadAll(::Tessellator&);

    MCNAPI void removeTickingTextures();

    MCNAPI void unloadAll();

    MCNAPI void update();

    MCNAPI ~TickingTextures();
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
#else // @header-generator platform
    struct Impl {};
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbacc42;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingTextures& operator=(TickingTextures const&);
    TickingTextures(TickingTextures const&);
    TickingTextures();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TickingTextures();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
