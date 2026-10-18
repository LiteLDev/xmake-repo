#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct JigsawStructure; }
// clang-format on

namespace br::worldgen {

class StructureRegistry {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // StructureRegistry inner types define
    using Map = ::entt::dense_map<::std::string, ::std::shared_ptr<::br::worldgen::JigsawStructure>>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<std::string, std::shared_ptr<br::worldgen::JigsawStructure>, std::hash<std::string>, std::equal_to<void>, std::allocator<std::pair<const std::string, std::shared_ptr<br::worldgen::JigsawStructure>>>>> mStructures;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::std::string, ::std::shared_ptr<::br::worldgen::JigsawStructure>>>
        mStructures;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::internal::dense_map_iterator<
        const entt::internal::dense_map_node<std::string, std::shared_ptr<br::worldgen::JigsawStructure>>*>
    begin() const;

    MCNAPI ::entt::internal::dense_map_iterator<
        const entt::internal::dense_map_node<std::string, std::shared_ptr<br::worldgen::JigsawStructure>>*>
    end() const;

    MCNAPI std::shared_ptr<const br::worldgen::JigsawStructure> get(std::string_view) const;

    MCNAPI ulong size() const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::br::worldgen::JigsawStructure const> get(::std::string_view key) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
