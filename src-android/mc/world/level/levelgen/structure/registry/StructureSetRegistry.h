#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct StructureSet; }
// clang-format on

namespace br::worldgen {

class StructureSetRegistry {
public:
    // StructureSetRegistry inner types define
    using Map = ::entt::dense_map<
        std::string,
        std::shared_ptr<br::worldgen::StructureSet>,
        std::hash<std::string>,
        std::equal_to<void>,
        std::allocator<std::pair<const std::string, std::shared_ptr<br::worldgen::StructureSet>>>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<std::string, std::shared_ptr<br::worldgen::StructureSet>, std::hash<std::string>, std::equal_to<void>, std::allocator<std::pair<const std::string, std::shared_ptr<br::worldgen::StructureSet>>>>> mStructureSets;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::entt::internal::dense_map_iterator<
        const entt::internal::dense_map_node<std::string, std::shared_ptr<br::worldgen::StructureSet>>*>
    begin() const;

    MCNAPI ::entt::internal::dense_map_iterator<
        const entt::internal::dense_map_node<std::string, std::shared_ptr<br::worldgen::StructureSet>>*>
    end() const;

    MCNAPI void record(std::string_view, std::shared_ptr<br::worldgen::StructureSet>&&);

    MCNAPI ulong size() const;
    // NOLINTEND
};

} // namespace br::worldgen
