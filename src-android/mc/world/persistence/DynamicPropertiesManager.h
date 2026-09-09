#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DynamicProperties;
class ILevelStorageManagerConnector;
class LevelStorage;
class ScriptStat;
class ScriptStatCollector;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DynamicPropertiesManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                mTotalBytesSaved;
    ::ll::TypedStorage<4, 4, int>                                  mWatchdogTick;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mOnSaveLevelDataSubscription;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DynamicProperties>>   mLevelDynamicProperties;
    ::ll::UntypedStorage<8, 24>                                    mCerealContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>> mMemoryStatCollector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>> mPropertiesStatCollector;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicPropertiesManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DynamicPropertiesManager(::cereal::ReflectionCtx const&);

    MCNAPI std::optional<ScriptStat> _collectMemoryStats(ulong, ulong, ulong);

    MCNAPI std::optional<ScriptStat> _collectPropertiesStats(ulong, ulong, ulong);

    MCNAPI void addBytesSaved(::DynamicProperties const&);

    MCNAPI ::DynamicProperties& getOrAddLevelDynamicProperties();

    MCNAPI void readFromLevelStorage(::LevelStorage&);

    MCNAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector&);

    MCNAPI void tick();

    MCNAPI void writeToLevelStorage(::LevelStorage&);

    MCNAPI ~DynamicPropertiesManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
