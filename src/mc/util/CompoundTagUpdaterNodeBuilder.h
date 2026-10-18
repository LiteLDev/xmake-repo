#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CompoundTagUpdater.h"

// auto generated forward declare list
// clang-format off
class CompoundTagEditHelper;
// clang-format on

class CompoundTagUpdaterNodeBuilder {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUpdaterNode;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::CompoundTagUpdater::Node&> mUpdaterNode;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundTagUpdaterNodeBuilder& operator=(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTagUpdaterNodeBuilder _addChildNode();
#else // @header-generator platform
    MCAPI ::CompoundTagUpdaterNodeBuilder&
    edit(::std::string const& tagName, ::std::function<void(::CompoundTagEditHelper&)>&& update);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTagUpdaterNodeBuilder& edit(std::string const&, std::function<void(CompoundTagEditHelper&)>&&);
#else // @header-generator platform
    MCAPI void fork(uint64 size, ::std::function<void(::CompoundTagUpdaterNodeBuilder&, uint64)>&& function);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fork(ulong, std::function<void(CompoundTagUpdaterNodeBuilder&, ulong)>&&);
#else // @header-generator platform
    MCAPI ::CompoundTagUpdaterNodeBuilder& match(::std::string const& tagName, ::std::string pattern);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTagUpdaterNodeBuilder& match(std::string const&, std::string);
#else // @header-generator platform
    MCAPI ::CompoundTagUpdaterNodeBuilder& matchInteger(::std::string const& tagName, int64 value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTagUpdaterNodeBuilder& matchInteger(std::string const&, long);
#else // @header-generator platform
    MCAPI ::CompoundTagUpdaterNodeBuilder& matchLiteral(::std::string const& tagName, ::std::string pattern);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTagUpdaterNodeBuilder& matchLiteral(std::string const&, std::string);
#else // @header-generator platform
    MCAPI ::CompoundTagUpdaterNodeBuilder& popVisit();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTagUpdaterNodeBuilder& popVisit();
#else // @header-generator platform
    MCAPI ::CompoundTagUpdaterNodeBuilder& remove(::std::string const& tagName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTagUpdaterNodeBuilder& remove(std::string const&);
#else // @header-generator platform
    MCAPI ::CompoundTagUpdaterNodeBuilder& rename(::std::string const& tagName, ::std::string const& newTagName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTagUpdaterNodeBuilder& rename(std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI ::CompoundTagUpdaterNodeBuilder&
    tryEdit(::std::string const& tagName, ::std::function<void(::CompoundTagEditHelper&)>&& update);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTagUpdaterNodeBuilder& tryEdit(std::string const&, std::function<void(CompoundTagEditHelper&)>&&);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& visit(std::string const&);
#else // @header-generator platform
    MCAPI ::CompoundTagUpdaterNodeBuilder& visit(::std::string const& tagName);
#endif // @header-generator platform
    // NOLINTEND
};
