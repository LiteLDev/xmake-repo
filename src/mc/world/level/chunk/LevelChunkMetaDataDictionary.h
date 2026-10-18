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
#if defined(LL_PLAT_A) // @header-generator platform
    using PostSerializeWriteCallback = std::function<void(const std::string&)>;
#else // @header-generator platform
    using PostSerializeWriteCallback = ::std::function<void(::std::string const&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<ulong, std::shared_ptr<LevelChunkMetaData>>> mDictionary;
    ::ll::UntypedStorage<1, 4>                                                      mDictionaryDirty;
    ::ll::UntypedStorage<1, 140>                                                    mSharedMutex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<uint64, ::std::shared_ptr<::LevelChunkMetaData>>> mDictionary;
    ::ll::TypedStorage<1, 1, bool>                                                         mDictionaryDirty;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                          mSharedMutex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunkMetaData> _registerMetaData(::LevelChunkMetaData const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::LevelChunkMetaData> _registerMetaData(::LevelChunkMetaData const& candidateMetaData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkAndSerialize(std::function<void(const std::string&)>) const;
#else // @header-generator platform
    MCAPI void checkAndSerialize(::std::function<void(::std::string const&)> postSerializeWriteCallback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void deserialize(::IDataInput&);

    MCNAPI std::shared_ptr<LevelChunkMetaData> registerMetaData(::LevelChunkMetaData const&);
#else // @header-generator platform
    MCAPI void deserialize(::IDataInput& stream);
#endif // @header-generator platform
    // NOLINTEND
};
