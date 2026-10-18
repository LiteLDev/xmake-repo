#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Tessellator;
class Vec3;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class TextureTessellator {
public:
    // TextureTessellator inner types declare
    // clang-format off
    struct TessellationParameters;
    // clang-format on

    // TextureTessellator inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class VerticalSide : int {
        // bitfield representation
        None    = 0,
        TopX    = 1 << 0,
        BottomX = 1 << 1,
        TopZ    = 1 << 2,
        BottomZ = 1 << 3,
    };
#else // @header-generator platform
    enum class VerticalSide : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    struct TessellationParameters {};
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkea97b2;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureTessellator& operator=(TextureTessellator const&);
    TextureTessellator(TextureTessellator const&);
    TextureTessellator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void tessellate(
        ::Tessellator&                                      tessellator,
        uchar const* const                                  colorData,
        uchar const* const                                  mersData,
        uchar const* const                                  normalsData,
        ushort                                              width,
        ushort                                              height,
        ::TextureTessellator::TessellationParameters const& parameters
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addLighting(
        ::Tessellator&     tessellator,
        uchar const* const imageData,
        ::Vec3 const&      normal,
        ::glm::vec4 const& mers,
        bool               deferredEnabled,
        bool               cloudLighting
    );

    MCNAPI static void
    validateImageTesselationForCreatorFeedback(ushort width, ushort height, ::std::string const& objectName);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
