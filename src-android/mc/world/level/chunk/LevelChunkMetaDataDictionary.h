#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class LevelChunkMetaData;
// clang-format on

class LevelChunkMetaDataDictionary {
public:
    // LevelChunkMetaDataDictionary inner types define
    using PostSerializeWriteCallback = std::function<void(const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<ulong, std::shared_ptr<LevelChunkMetaData>>> mDictionary;
    ::ll::UntypedStorage<1, 4>                                                      mDictionaryDirty;
    ::ll::UntypedStorage<1, 140>                                                    mSharedMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<LevelChunkMetaData> _registerMetaData(::LevelChunkMetaData const&);

    MCNAPI void checkAndSerialize(std::function<void(const std::string&)>) const;

    MCNAPI void deserialize(::IDataInput&);

    MCNAPI std::shared_ptr<LevelChunkMetaData> registerMetaData(::LevelChunkMetaData const&);
    // NOLINTEND
};
