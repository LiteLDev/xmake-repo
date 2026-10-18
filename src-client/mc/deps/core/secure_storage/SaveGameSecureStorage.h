#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/secure_storage/SecureStorage.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SaveGameSecureStorage : public ::SecureStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSettingsPath;
    ::ll::UntypedStorage<8, 16>            mJsonValue;
    ::ll::TypedStorage<1, 1, bool>         mInitialized;
    // NOLINTEND

public:
    // prevent constructor by default
    SaveGameSecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SaveGameSecureStorage() = default;

    virtual bool add(std::string const&, std::string const&);

    virtual bool addOrUpdate(std::string const&, std::string const&);

    virtual bool remove(std::string const&);

    virtual bool get(std::string const&, std::string&);
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
