#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/NpcGUIOffset.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDataIDs.h"
#include "mc/world/actor/SkinData.h"
#include "mc/world/actor/npc/ActionContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
class NpcI18nObserver;
class Player;
namespace Json { class Value; }
namespace npc { struct CommandAction; }
namespace npc { struct UrlAction; }
// clang-format on

class NpcComponent {
public:
    // NpcComponent inner types define
    using TextFilter = std::function<std::string(const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                             mCurrentSkin;
    ::ll::TypedStorage<4, 36, ::NpcGUIOffset>                                 mPortraitOffsets;
    ::ll::TypedStorage<4, 36, ::NpcGUIOffset>                                 mPickerOffsets;
    ::ll::TypedStorage<8, 24, std::vector<SkinData>>                          mNPCSkins;
    ::ll::TypedStorage<8, 48, ::npc::ActionContainer>                         mActionsContainer;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::string>> mPlayerSceneState;
    ::ll::TypedStorage<8, 24, std::string>                                    mDefaultSceneId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                     mInteractText;
    ::ll::UntypedStorage<8, 48>                                               mInteractTextFilter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NpcI18nObserver>>                mNpcI18nObserver;
    ::ll::TypedStorage<1, 1, bool>                                            mIsGloballyAccessed;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcComponent& operator=(NpcComponent const&);
    NpcComponent(NpcComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NpcComponent();

    MCNAPI NpcComponent(::NpcComponent&&);

    MCNAPI void _defineEntityDataString(::Actor&, ::ActorDataIDs);

    MCNAPI void _deserializeData(::Json::Value const&);

    MCNAPI void _loadData(::Actor&);

    MCNAPI void addAction(std::variant<npc::CommandAction, npc::UrlAction>&&);

    MCNAPI void addAdditionalSaveData(::CompoundTag&, ::Actor const&) const;

    MCNAPI void clearSceneStateForAllPlayers();

    MCNAPI void executeCommandAction(::Actor&, ::Player&, int, std::string const&);

    MCNAPI std::variant<npc::CommandAction, npc::UrlAction>* getActionAt(ulong);

    MCNAPI ulong getActionCount() const;

    MCNAPI ::npc::ActionContainer& getActionsContainer();

    MCNAPI std::vector<int> getCommandCounts() const;

    MCNAPI std::string const& getDefaultSceneId() const;

    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI std::string const& getInteractiveRawText(::Actor const&) const;

    MCNAPI std::string const& getInteractiveText(::Actor&) const;

    MCNAPI std::string const& getName(::Actor const&) const;

    MCNAPI std::string const& getNameRawText(::Actor const&) const;

    MCNAPI ::NpcGUIOffset const& getPickerOffset() const;

    MCNAPI ::NpcGUIOffset const& getPortraitOffset() const;

    MCNAPI std::string const& getSceneStateForPlayer(::ActorUniqueID const&) const;

    MCNAPI ::SkinData const& getSelectedSkinData() const;

    MCNAPI ulong getSkinCount() const;

    MCNAPI ::SkinData const& getSkinData(int) const;

    MCNAPI int getSkinIndex() const;

    MCNAPI int getUrlCount() const;

    MCNAPI void initClientOnlyData(::Actor&);

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI bool isGloballyAccessed() const;

    MCNAPI void loadActions(::Actor&);

    MCNAPI void loadInteractiveRawText(::Actor&);

    MCNAPI void loadNPCData(::Actor&);

    MCNAPI void loadNameRawText(::Actor&);

    MCNAPI ::NpcComponent& operator=(::NpcComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void removeActionAt(ulong);

    MCNAPI void removeInteractiveTextFilter();

    MCNAPI std::string sanitizeRawText(std::string const&) const;

    MCNAPI void setDefaultSceneId(std::string);

    MCNAPI bool setDialogueScene(::Actor&, std::string const&);

    MCNAPI void setInteractiveText(::Actor&, std::string const&, bool);

    MCNAPI void setInteractiveTextFilter(std::function<std::string(const std::string&)>, bool);

    MCNAPI void setIsGloballyAccessed();

    MCNAPI void setName(::Actor&, std::string const&, bool);

    MCNAPI void setSceneStateForPlayer(::Actor&, ::ActorUniqueID const&, std::string const&);

    MCNAPI bool setSkinIndex(::Actor&, int, bool);

    MCNAPI void syncActionsWithClient(::Actor&);

    MCNAPI void syncActionsWithServer(::Actor&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& ACTIONS_TAG();

    MCNAPI static std::string const& INTERACTIVE_TAG();

    MCNAPI static std::string const& NAME_RAW_TEXT_TAG();

    MCNAPI static std::string const& PLAYER_ID_TAG();

    MCNAPI static std::string const& PLAYER_SCENE_MAPPING_TAG();

    MCNAPI static std::string const& SCENE_NAME_TAG();

    MCNAPI static std::string const& URL_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::NpcComponent&&);
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
