#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/models/Model.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class ActorResourceDefinition;
class DataDrivenRenderer;
class ExpressionNode;
class GameVersion;
class ItemStack;
class RenderParams;
class Vec3;
// clang-format on

class DataDrivenModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ActorResourceDefinition>>                     mResourceDefinition;
    ::ll::TypedStorage<8, 40, ::HashedString>                                             mName;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::weak_ptr<DataDrivenRenderer>>> mItemToRendererMap;
    ::ll::TypedStorage<1, 1, bool>                                                        mEnableAttachables;
    ::ll::TypedStorage<1, 1, bool>                                                        mHideArmor;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DataDrivenModel(std::weak_ptr<ActorResourceDefinition>);

    MCNAPI float executeScript(::HashedString const&, ::RenderParams&, float);

    MCNAPI ::ExpressionNode getCopyOfScript_defaultIfNone(::HashedString const&) const;

    MCNAPI std::weak_ptr<DataDrivenRenderer> getDataDrivenRenderer(::RenderParams&, ::ItemStack const&);

    MCNAPI std::string getResourceDefinitionName() const;

    MCNAPI bool hasScript(::HashedString const&) const;

    MCNAPI void render(std::shared_ptr<DataDrivenRenderer>, ::ActorRenderData&, ::Vec3 const&, ::Vec3 const&);

    MCNAPI void renderAttachable(::ItemStack const&, ::AttachableSlotIndex const&, ::RenderParams&, ::Actor&);

    MCNAPI void renderAttachableNoChecks(::ItemStack const&, ::AttachableSlotIndex const&, ::RenderParams&, ::Actor&);

    MCNAPI void resolveHeldItemScaleForRender(::RenderParams&) const;

    MCNAPI void setupAttachable(::ItemStack const&, ::AttachableSlotIndex const&, ::RenderParams&, ::Actor&);

    MCNAPI void
    setupAttachableNoChecks(::ItemStack const&, ::AttachableSlotIndex const&, ::RenderParams&, ::Actor&, bool, bool);

    MCNAPI bool tryExecuteScript(::HashedString const&, ::RenderParams&, float&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void resolveHeldItemScaleForRender(::ExpressionNode const&, ::RenderParams&);

    MCNAPI static bool
    shouldRenderAttachableOnActor(::ItemStack const&, ::AttachableSlotIndex const&, bool, bool, bool, bool, bool);

    MCNAPI static bool shouldResolveHeldItemScaleForRender(::RenderParams const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::GameVersion& Version_1_16_210();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<ActorResourceDefinition>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/models/Model.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class ActorResourceDefinition;
class DataDrivenRenderer;
class ExpressionNode;
class GameVersion;
class ItemStack;
class RenderParams;
class Vec3;
// clang-format on

class DataDrivenModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ActorResourceDefinition>>                       mResourceDefinition;
    ::ll::TypedStorage<8, 48, ::HashedString>                                                   mName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::weak_ptr<::DataDrivenRenderer>>> mItemToRendererMap;
    ::ll::TypedStorage<1, 1, bool>                                                              mEnableAttachables;
    ::ll::TypedStorage<1, 1, bool>                                                              mHideArmor;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DataDrivenModel(::std::weak_ptr<::ActorResourceDefinition> definitionWeakPtr);

    MCAPI bool _setArmorTrim(
        ::ItemStack const&                   itemInstance,
        ::std::shared_ptr<::DataDrivenModel> model,
        ::Actor&                             actor,
        ::RenderParams&                      renderParams,
        ::RenderParams&                      childRenderParams
    );

    MCAPI ::ExpressionNode getCopyOfScript_defaultIfNone(::HashedString const& name) const;

    MCAPI ::std::weak_ptr<::DataDrivenRenderer>
    getDataDrivenRenderer(::RenderParams& renderParams, ::ItemStack const& itemInstance);

    MCAPI ::std::string getResourceDefinitionName() const;

    MCAPI bool hasScript(::HashedString const& name) const;

    MCAPI void render(
        ::std::shared_ptr<::DataDrivenRenderer> renderer,
        ::ActorRenderData&                      actorRenderData,
        ::Vec3 const&                           modelTranslationWithWorldRotation,
        ::Vec3 const&                           cameraTargetPos
    );

    MCAPI void renderAttachable(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor
    );

    MCAPI void renderAttachableNoChecks(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor
    );

    MCAPI void resolveHeldItemScaleForRender(::RenderParams& renderParams) const;

    MCAPI void setupAttachable(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor
    );

    MCAPI void setupAttachableNoChecks(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor,
        bool                         isFirstPerson,
        bool                         runParentSetup
    );

    MCAPI bool tryExecuteScript(::HashedString const& scriptName, ::RenderParams& renderParams, float& result);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool shouldRenderAttachableOnActor(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        bool                         isSpectator,
        bool                         isFirstPerson,
        bool                         isRenderingOnMap,
        bool                         lessThanOrEqualToVersion_1_16_210,
        bool                         hideArmor
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::GameVersion& Version_1_16_210();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::ActorResourceDefinition> definitionWeakPtr);
    // NOLINTEND
};
#else // @header-generator platform
class DataDrivenModel {};
#endif // @header-generator platform
#endif // @header-generator platform
