#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class ClientDimensionExtensions;
class Dimension;
class IStructureWireframeQueue;
struct DimensionType;
// clang-format on

class IClientDimensionExtensions {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientDimensionExtensions() = default;

    virtual void visitMutable(::brstd::function_ref<void(ClientDimensionExtensions&)>) = 0;

    virtual void visitStructureWireframe(::brstd::function_ref<void(IStructureWireframeQueue&)>) = 0;

    virtual void init(::Dimension&) = 0;

    virtual void startLeaveGame() = 0;

    virtual ::Bedrock::NonOwnerPointer<ChunkSource> createClientServerChunkSource(::DimensionType const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IClientDimensionExtensions {};
#endif // @header-generator platform
