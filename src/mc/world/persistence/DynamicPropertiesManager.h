#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class DynamicProperties;
class ILevelStorageManagerConnector;
class LevelStorage;
class ScriptStat;
#if defined(LL_PLAT_A) // @header-generator platform
class ScriptStatCollector;
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DynamicPropertiesManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                mTotalBytesSaved;
    ::ll::TypedStorage<4, 4, int>                                  mWatchdogTick;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mOnSaveLevelDataSubscription;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DynamicProperties>>   mLevelDynamicProperties;
    ::ll::UntypedStorage<8, 24>                                    mCerealContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>> mMemoryStatCollector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>> mPropertiesStatCollector;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkde8f1d;
    ::ll::UntypedStorage<4, 4>  mUnke0cd59;
    ::ll::UntypedStorage<8, 16> mUnk3126ff;
    ::ll::UntypedStorage<8, 8>  mUnkdfddbd;
    ::ll::UntypedStorage<8, 24> mUnk52c501;
    ::ll::UntypedStorage<8, 8>  mUnk804677;
    ::ll::UntypedStorage<8, 8>  mUnk802b93;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DynamicPropertiesManager& operator=(DynamicPropertiesManager const&);
    DynamicPropertiesManager(DynamicPropertiesManager const&);
#endif // @header-generator platform
    DynamicPropertiesManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DynamicPropertiesManager(::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCNAPI explicit DynamicPropertiesManager(::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptStat> _collectMemoryStats(ulong, ulong, ulong);
#else // @header-generator platform
    MCNAPI ::std::optional<::ScriptStat> _collectMemoryStats(uint64, uint64, uint64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptStat> _collectPropertiesStats(ulong, ulong, ulong);

    MCNAPI void addBytesSaved(::DynamicProperties const&);
#else // @header-generator platform
    MCNAPI ::std::optional<::ScriptStat> _collectPropertiesStats(uint64, uint64, uint64);
#endif // @header-generator platform

    MCNAPI ::DynamicProperties& getOrAddLevelDynamicProperties();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readFromLevelStorage(::LevelStorage&);
#else // @header-generator platform
    MCNAPI void readFromLevelStorage(::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector&);
#else // @header-generator platform
    MCNAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick();

    MCNAPI void writeToLevelStorage(::LevelStorage&);
#else // @header-generator platform
    MCNAPI void writeToLevelStorage(::LevelStorage& levelStorage);
#endif // @header-generator platform

    MCNAPI ~DynamicPropertiesManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
