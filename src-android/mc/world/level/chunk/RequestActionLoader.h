#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ICommandOriginLoader;
class IRequestAction;
class IUnknownBlockTypeRegistry;
class JigsawStructureElementRegistry;
// clang-format on

class RequestActionLoader {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidTag(::IRequestAction::RequestActionType, ::CompoundTag const&);

    MCNAPI static std::unique_ptr<IRequestAction> load(
        ::IRequestAction::RequestActionType,
        ::CompoundTag const&,
        ::ICommandOriginLoader&,
        std::string const&,
        ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>
    );

    MCNAPI static std::unique_ptr<IRequestAction> load(
        ::IRequestAction::RequestActionType,
        ::CompoundTag const&,
        ::ICommandOriginLoader&,
        std::string const&,
        ::JigsawStructureElementRegistry const&,
        ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>
    );
    // NOLINTEND
};
