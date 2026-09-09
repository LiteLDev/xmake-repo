#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/PBRTextureData.h"
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"

// auto generated forward declare list
// clang-format off
class Tessellator;
class Vec3;
namespace cg { class ImageBuffer; }
namespace mce { struct Image; }
// clang-format on

class TextureTessellator {
public:
    // TextureTessellator inner types declare
    // clang-format off
    struct TessellationParameters;
    // clang-format on

    // TextureTessellator inner types define
    enum class VerticalSide : int {
        // bitfield representation
        None    = 0,
        TopX    = 1 << 0,
        BottomX = 1 << 1,
        TopZ    = 1 << 2,
        BottomZ = 1 << 3,
    };

    struct TessellationParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                  mTopLeftX;
        ::ll::TypedStorage<4, 4, int>                                  mTopLeftY;
        ::ll::TypedStorage<4, 4, int>                                  mBottomRightX;
        ::ll::TypedStorage<4, 4, int>                                  mBottomRightY;
        ::ll::TypedStorage<1, 1, bool>                                 mTessellateDown;
        ::ll::TypedStorage<1, 1, bool>                                 mTessellateUp;
        ::ll::TypedStorage<1, 1, bool>                                 mUsePixelDepth;
        ::ll::TypedStorage<1, 1, bool>                                 mAppendIfAlreadyTessellating;
        ::ll::TypedStorage<1, 1, bool>                                 mAddPixelAdjacency;
        ::ll::TypedStorage<4, 84, ::mce::framebuilder::PBRTextureData> mPBRData;
        ::ll::TypedStorage<4, 4, ::TextureTessellator::VerticalSide>   mVerticalSidesToOmit;
        ::ll::TypedStorage<8, 24, std::string>                         mTextureIdentifier;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCloudLighting;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureTessellator();

    MCNAPI void _addLighting(
        ::Tessellator&,
        uchar const* const,
        ::Vec3 const&,
        ::glm::vec<4, float, (glm::qualifier)0> const&,
        bool,
        bool
    );

    MCNAPI void
    tessellate(::Tessellator&, ::cg::ImageBuffer const&, ::TextureTessellator::TessellationParameters const&);

    MCNAPI void tessellate(
        ::Tessellator&,
        uchar const* const,
        uchar const* const,
        uchar const* const,
        ushort const,
        ushort const,
        ::TextureTessellator::TessellationParameters const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void validateImageTesselationForCreatorFeedback(ushort const, ushort const, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
