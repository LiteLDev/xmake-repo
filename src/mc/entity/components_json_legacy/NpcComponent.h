#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/NpcGUIOffset.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDataIDs.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/SkinData.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SkinData;
#endif // @header-generator platform
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace npc { struct CommandAction; }
namespace npc { struct UrlAction; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class NpcComponent {
public:
    // NpcComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using TextFilter = std::function<std::string(const std::string&)>;
#else // @header-generator platform
    using TextFilter = ::std::function<::std::string(::std::string const&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                   mCurrentSkin;
    ::ll::TypedStorage<4, 36, ::NpcGUIOffset>                                       mPortraitOffsets;
    ::ll::TypedStorage<4, 36, ::NpcGUIOffset>                                       mPickerOffsets;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkinData>>                            mNPCSkins;
    ::ll::TypedStorage<8, 48, ::npc::ActionContainer>                               mActionsContainer;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::std::string>> mPlayerSceneState;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mDefaultSceneId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                       mInteractText;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string(::std::string const&)>> mInteractTextFilter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NpcI18nObserver>>                  mNpcI18nObserver;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsGloballyAccessed;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NpcComponent& operator=(NpcComponent const&);
    NpcComponent(NpcComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NpcComponent();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NpcComponent();
#else // @header-generator platform
    MCAPI NpcComponent(::NpcComponent&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NpcComponent(::NpcComponent&&);
#else // @header-generator platform
    MCAPI void _deserializeData(::Json::Value const& npcData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _defineEntityDataString(::Actor&, ::ActorDataIDs);
#else // @header-generator platform
    MCAPI void _loadData(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _deserializeData(::Json::Value const&);
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _loadData(::Actor&);
#else // @header-generator platform
    MCAPI ::std::vector<int> getCommandCounts() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAction(std::variant<npc::CommandAction, npc::UrlAction>&&);
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&, ::Actor const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string const& getInteractiveRawText(::Actor const& owner) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearSceneStateForAllPlayers();
#else // @header-generator platform
    MCAPI ::std::string const& getInteractiveText(::Actor& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void executeCommandAction(::Actor&, ::Player&, int, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string const& getName(::Actor const& owner) const;

    MCAPI ::std::string const& getNameRawText(::Actor const& owner) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<npc::CommandAction, npc::UrlAction>* getActionAt(ulong);
#else // @header-generator platform
    MCAPI ::std::string const& getSceneStateForPlayer(::ActorUniqueID const& playerID) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getActionCount() const;
#else // @header-generator platform
    MCAPI void initClientOnlyData(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::npc::ActionContainer& getActionsContainer();
#else // @header-generator platform
    MCAPI void initFromDefinition(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<int> getCommandCounts() const;
#else // @header-generator platform
    MCAPI void loadActions(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getDefaultSceneId() const;
#else // @header-generator platform
    MCAPI void loadInteractiveRawText(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);
#else // @header-generator platform
    MCAPI void loadNameRawText(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getInteractiveRawText(::Actor const&) const;
#else // @header-generator platform
    MCAPI ::NpcComponent& operator=(::NpcComponent&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getInteractiveText(::Actor&) const;
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getName(::Actor const&) const;
#else // @header-generator platform
    MCAPI ::std::string sanitizeRawText(::std::string const& rawText) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getNameRawText(::Actor const&) const;
#else // @header-generator platform
    MCAPI void setDefaultSceneId(::std::string sceneId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NpcGUIOffset const& getPickerOffset() const;
#else // @header-generator platform
    MCAPI bool setDialogueScene(::Actor& owner, ::std::string const& sceneName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NpcGUIOffset const& getPortraitOffset() const;
#else // @header-generator platform
    MCAPI void setInteractiveText(::Actor& owner, ::std::string const& text, bool setLocal);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getSceneStateForPlayer(::ActorUniqueID const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void
    setInteractiveTextFilter(::std::function<::std::string(::std::string const&)> filter, bool shouldRunFilter);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SkinData const& getSelectedSkinData() const;
#else // @header-generator platform
    MCAPI void setName(::Actor& owner, ::std::string const& name, bool setLocal);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getSkinCount() const;
#else // @header-generator platform
    MCAPI void setSceneStateForPlayer(::Actor& owner, ::ActorUniqueID const& playerID, ::std::string const& sceneName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SkinData const& getSkinData(int) const;
#else // @header-generator platform
    MCAPI bool setSkinIndex(::Actor& owner, int skinIndex, bool setLocal);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getSkinIndex() const;
#else // @header-generator platform
    MCAPI void syncActionsWithClient(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getUrlCount() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void syncActionsWithServer(::Actor& owner) const;
#endif
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initClientOnlyData(::Actor&);
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _defineEntityDataString(::Actor& owner, ::ActorDataIDs id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static void
    executeCommandAction(::Actor& owner, ::Player& sourcePlayer, int actionIndex, ::std::string const& sceneName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ACTIONS_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& ACTIONS_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& INTERACTIVE_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& INTERACTIVE_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& NAME_RAW_TEXT_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& NAME_RAW_TEXT_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PLAYER_ID_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& PLAYER_ID_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PLAYER_SCENE_MAPPING_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& PLAYER_SCENE_MAPPING_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& SCENE_NAME_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& SCENE_NAME_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& URL_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& URL_TAG();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::NpcComponent&&);
#else // @header-generator platform
    MCAPI void* $ctor(::NpcComponent&& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
