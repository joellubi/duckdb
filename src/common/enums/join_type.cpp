#include "duckdb/common/enums/join_type.hpp"
#include "duckdb/common/enum_util.hpp"

namespace duckdb {

string JoinTypeToString(JoinType type) {
	switch (type) {
	case JoinType::LEFT:
		return "LEFT";
	case JoinType::RIGHT:
		return "RIGHT";
	case JoinType::INNER:
		return "INNER";
	case JoinType::OUTER:
		return "FULL";
	case JoinType::SEMI:
		return "SEMI";
	case JoinType::ANTI:
		return "ANTI";
	case JoinType::SINGLE:
		return "SINGLE";
	case JoinType::MARK:
		return "MARK";
	case JoinType::INVALID:
		return "INVALID";
	}
	return "INVALID";
}

bool IsLeftOuterJoin(JoinType type) {
	return type == JoinType::LEFT || type == JoinType::OUTER;
}

bool IsRightOuterJoin(JoinType type) {
	return type == JoinType::OUTER || type == JoinType::RIGHT;
}

} // namespace duckdb
