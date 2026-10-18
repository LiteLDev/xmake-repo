#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/PrimitiveTopology.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct DrawIndexedInstancedCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                        IndexCount;
    ::ll::TypedStorage<4, 4, uint>                        StartIndex;
    ::ll::TypedStorage<4, 4, uint>                        BaseVertex;
    ::ll::TypedStorage<4, 4, uint>                        InstanceCount;
    ::ll::TypedStorage<4, 4, uint>                        StartInstance;
    ::ll::TypedStorage<4, 4, ::renoir::PrimitiveTopology> Topology;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DrawIndexedInstancedCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk41b18c;
    ::ll::UntypedStorage<4, 4> mUnkc3e6c0;
    ::ll::UntypedStorage<4, 4> mUnk31594d;
    ::ll::UntypedStorage<4, 4> mUnk3cf101;
    ::ll::UntypedStorage<4, 4> mUnk99a289;
    ::ll::UntypedStorage<4, 4> mUnk797401;
    // NOLINTEND

public:
    // prevent constructor by default
    DrawIndexedInstancedCmd& operator=(DrawIndexedInstancedCmd const&);
    DrawIndexedInstancedCmd(DrawIndexedInstancedCmd const&);
    DrawIndexedInstancedCmd();
};
#else // @header-generator platform
struct DrawIndexedInstancedCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
