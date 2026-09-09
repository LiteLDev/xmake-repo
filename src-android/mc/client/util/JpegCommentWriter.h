#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class ScreenContext;
namespace Core { class Path; }
namespace mce { class Color; }
// clang-format on

class JpegCommentWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::FontHandle>       mFontHandle;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer>  mPolaroidOverlay;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer>  mOverlayMask;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mTexMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    JpegCommentWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JpegCommentWriter(::IMinecraftGame&);

    MCNAPI void _drawImage(::ScreenContext&, ::cg::ImageBuffer&&);

    MCNAPI bool execute(::ScreenContext&, ::Core::Path const&, std::string const&, ::mce::Color const&);

    MCNAPI bool isValid() const;

    MCNAPI ~JpegCommentWriter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
