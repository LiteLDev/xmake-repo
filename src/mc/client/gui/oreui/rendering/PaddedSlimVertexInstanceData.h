#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace renoir { struct SlimVertexInstanceData; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

struct PaddedSlimVertexInstanceData {
public:
    // PaddedSlimVertexInstanceData inner types declare
    // clang-format off
    struct Padding;
    // clang-format on

    // PaddedSlimVertexInstanceData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Padding {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, std::array<uint, 3>> mPad;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                            mX;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadA;
    ::ll::TypedStorage<4, 4, uint>                                            mY;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadB;
    ::ll::TypedStorage<4, 4, uint>                                            mZ;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadC;
    ::ll::TypedStorage<4, 4, uint>                                            mW;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadD;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void vertexBufferTransform(std::vector<uchar> const&, std::vector<uchar>&, ulong);
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct Padding {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::std::array<uint, 3>> mPad;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                            mX;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadA;
    ::ll::TypedStorage<4, 4, uint>                                            mY;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadB;
    ::ll::TypedStorage<4, 4, uint>                                            mZ;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadC;
    ::ll::TypedStorage<4, 4, uint>                                            mW;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadD;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    vertexBufferTransform(::std::vector<uchar> const& gameface, ::std::vector<uchar>& dragon, uint64 elementCount);
    // NOLINTEND
#else // @header-generator platform
    struct Padding {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
