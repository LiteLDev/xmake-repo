#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentTierInfo;
class IContentKeyProvider;
class IPackManifestFactory;
class PackSource;
struct PackInstanceId;
struct PackModel;
// clang-format on

class PacksModelFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<PackInstanceId> deserializeFile(std::basic_istream<char, std::char_traits<char>>&);

    MCNAPI static void loadPacks(
        std::vector<PackInstanceId> const&,
        ::PackSource&,
        std::vector<PackModel>&,
        std::vector<PackModel>&,
        ::IPackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
    );

    MCNAPI static void loadPacksWithDependencies(
        std::vector<PackInstanceId> const&,
        ::PackSource&,
        std::vector<PackModel>&,
        std::vector<PackModel>&,
        ::IPackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::ContentTierInfo const&
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct PackInstanceId;
// clang-format on

class PacksModelFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::PackInstanceId> deserializeFile(::std::istream& file);
    // NOLINTEND
};
#else // @header-generator platform
class PacksModelFactory {};
#endif // @header-generator platform
#endif // @header-generator platform
