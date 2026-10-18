#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/PrimitiveTopology.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct DrawIndexedCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                        IndexCount;
    ::ll::TypedStorage<4, 4, uint>                        StartIndex;
    ::ll::TypedStorage<4, 4, uint>                        BaseVertex;
    ::ll::TypedStorage<4, 4, ::renoir::PrimitiveTopology> Topology;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DrawIndexedCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkda1d38;
    ::ll::UntypedStorage<4, 4> mUnkd58cf4;
    ::ll::UntypedStorage<4, 4> mUnkc11043;
    ::ll::UntypedStorage<4, 4> mUnk3a26c8;
    // NOLINTEND

public:
    // prevent constructor by default
    DrawIndexedCmd& operator=(DrawIndexedCmd const&);
    DrawIndexedCmd(DrawIndexedCmd const&);
    DrawIndexedCmd();
};
#else // @header-generator platform
struct DrawIndexedCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
