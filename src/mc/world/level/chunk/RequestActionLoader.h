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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isValidTag(::IRequestAction::RequestActionType, ::CompoundTag const&);
#else // @header-generator platform
    MCAPI static bool isValidTag(::IRequestAction::RequestActionType actionType, ::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<IRequestAction> load(
        ::IRequestAction::RequestActionType,
        ::CompoundTag const&,
        ::ICommandOriginLoader&,
        std::string const&,
        ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::IRequestAction> load(
        ::IRequestAction::RequestActionType                     actionType,
        ::CompoundTag const&                                    tag,
        ::ICommandOriginLoader&                                 loader,
        ::std::string const&                                    dimensionPrefix,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockTypeRegistry
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<IRequestAction> load(
        ::IRequestAction::RequestActionType,
        ::CompoundTag const&,
        ::ICommandOriginLoader&,
        std::string const&,
        ::JigsawStructureElementRegistry const&,
        ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::IRequestAction> load(
        ::IRequestAction::RequestActionType                     actionType,
        ::CompoundTag const&                                    tag,
        ::ICommandOriginLoader&                                 loader,
        ::std::string const&                                    dimensionPrefix,
        ::JigsawStructureElementRegistry const&                 elementReg,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockTypeRegistry
#endif // @header-generator platform
    );
    // NOLINTEND
};
