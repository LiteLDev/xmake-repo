#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/application/storage_migration/StorageMigrationFiles.h"
#include "mc/deps/application/storage_migration/StorageMigrationFolders.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::StorageMigration {

struct StorageMigrationInputs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::StorageMigration::StorageMigrationFolders>> mFolders;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::StorageMigration::StorageMigrationFiles>>   mFiles;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void()>>>                              mSuccessCallbacks;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                                 mExcludeExtensions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkacb940;
    ::ll::UntypedStorage<8, 24> mUnk9aee8b;
    ::ll::UntypedStorage<8, 24> mUnkfccab3;
    ::ll::UntypedStorage<8, 64> mUnkf0ee31;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    StorageMigrationInputs& operator=(StorageMigrationInputs const&);
    StorageMigrationInputs(StorageMigrationInputs const&);
    StorageMigrationInputs();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    StorageMigrationInputs& operator=(StorageMigrationInputs const&);
    StorageMigrationInputs();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI StorageMigrationInputs(::Bedrock::StorageMigration::StorageMigrationInputs const&);

    MCNAPI ~StorageMigrationInputs();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Bedrock::StorageMigration::StorageMigrationInputs const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::StorageMigration
