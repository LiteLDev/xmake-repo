#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

class CerealSchemaUpgrade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                 mTargetVersion;
    ::ll::TypedStorage<8, 24, std::string>      mSchemaKey;
    ::ll::TypedStorage<8, 24, std::string>      mJsonMemberName;
    ::ll::TypedStorage<8, 16, std::string_view> mFileType;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealSchemaUpgrade();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CerealSchemaUpgrade();

    virtual bool previousSchema(::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const = 0;

    virtual void upgradeToNext(::rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, ::SemVersion const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CerealSchemaUpgrade(std::string_view, ::SemVersion, std::string const&, std::string const&);

    MCNAPI bool checkAndUpgradeToNext(
        ::rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        ::SemVersion const&
    ) const;

    MCNAPI ::SemVersion const& getTargetVersion() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string_view, ::SemVersion, std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $upgradeToNext(
        ::rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        ::SemVersion const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
