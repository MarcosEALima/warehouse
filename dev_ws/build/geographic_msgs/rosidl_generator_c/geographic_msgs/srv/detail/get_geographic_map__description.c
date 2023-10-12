// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from geographic_msgs:srv/GetGeographicMap.idl
// generated code does not contain a copyright notice

#include "geographic_msgs/srv/detail/get_geographic_map__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetGeographicMap__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0xbe, 0x97, 0x48, 0x9e, 0xc3, 0x16, 0x1d,
      0x31, 0x3e, 0x12, 0x5a, 0x49, 0x08, 0x8c, 0xa9,
      0x95, 0x19, 0x1e, 0xb1, 0x8d, 0x3c, 0x16, 0x7b,
      0x3b, 0x63, 0x0f, 0x2e, 0x9f, 0x22, 0x1f, 0xc9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetGeographicMap_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x14, 0x29, 0x13, 0x0e, 0x89, 0x45, 0x87, 0xb2,
      0x95, 0xfa, 0x58, 0x54, 0x09, 0xd3, 0x8c, 0x08,
      0x97, 0x8a, 0xef, 0xf7, 0xc9, 0x0c, 0xd7, 0x11,
      0x61, 0xe2, 0xef, 0x06, 0xa8, 0x0c, 0xdb, 0xd4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetGeographicMap_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0x31, 0x07, 0xb9, 0x08, 0x5e, 0xda, 0xac,
      0xd3, 0x16, 0x96, 0x08, 0xf1, 0xaa, 0x12, 0x07,
      0x07, 0x5a, 0x3a, 0xfe, 0xa9, 0xc8, 0x17, 0xe6,
      0x25, 0x46, 0xf1, 0xc2, 0xd8, 0xf5, 0x60, 0xb4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetGeographicMap_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1b, 0x11, 0xd3, 0x41, 0x79, 0x72, 0xaf, 0xc0,
      0x7c, 0x1f, 0xda, 0x95, 0xe0, 0xc7, 0xd1, 0xa1,
      0x99, 0x0f, 0xdb, 0xa3, 0xff, 0xf9, 0x4f, 0xf7,
      0x51, 0xbc, 0x7d, 0x9d, 0x3f, 0x98, 0xd2, 0xa5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geographic_msgs/msg/detail/map_feature__functions.h"
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
#include "geographic_msgs/msg/detail/bounding_box__functions.h"
#include "geographic_msgs/msg/detail/way_point__functions.h"
#include "geographic_msgs/msg/detail/geo_point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geographic_msgs/msg/detail/geographic_map__functions.h"
#include "geographic_msgs/msg/detail/key_value__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__BoundingBox__EXPECTED_HASH = {1, {
    0x80, 0xa8, 0x58, 0x27, 0xe5, 0x95, 0x32, 0x5b,
    0xd0, 0x42, 0x7f, 0x2f, 0xa1, 0xaa, 0x38, 0xb7,
    0x0f, 0x12, 0xd9, 0x56, 0x40, 0xd1, 0x73, 0x9d,
    0xb5, 0x1f, 0xe0, 0x20, 0xa4, 0x07, 0xda, 0xa6,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__GeoPoint__EXPECTED_HASH = {1, {
    0x60, 0x2c, 0x64, 0x7c, 0xf8, 0x7b, 0xbe, 0x95,
    0xa0, 0x23, 0x1b, 0x45, 0x9b, 0x5a, 0xc3, 0x00,
    0x51, 0x87, 0x5d, 0x07, 0xc0, 0xc7, 0x40, 0xb3,
    0x1a, 0xd7, 0xa8, 0xc4, 0x66, 0x2b, 0x97, 0x1e,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__GeographicMap__EXPECTED_HASH = {1, {
    0xfa, 0xea, 0xde, 0x36, 0x0e, 0xc3, 0x9e, 0xef,
    0x57, 0x36, 0x87, 0x8d, 0x91, 0x04, 0x1b, 0x90,
    0xb6, 0xac, 0xcf, 0x6c, 0x49, 0xe3, 0x16, 0x51,
    0x68, 0x50, 0x4f, 0x8a, 0xf9, 0x1f, 0xb4, 0x58,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__KeyValue__EXPECTED_HASH = {1, {
    0x7b, 0x60, 0xe4, 0x65, 0xab, 0x0a, 0x5d, 0x81,
    0x08, 0x59, 0x57, 0x62, 0xd0, 0x5e, 0xe5, 0xf8,
    0xc9, 0xda, 0x8b, 0x7f, 0xfe, 0xd9, 0x21, 0xd6,
    0xf9, 0x12, 0x62, 0xf3, 0x84, 0xbe, 0xe2, 0x4b,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__MapFeature__EXPECTED_HASH = {1, {
    0x92, 0x51, 0x01, 0xfc, 0x45, 0xbc, 0x3a, 0x1a,
    0xc2, 0xfb, 0x36, 0x04, 0xfa, 0x91, 0xb7, 0x99,
    0x13, 0x72, 0x2e, 0x44, 0x37, 0x84, 0x21, 0xa1,
    0x65, 0x86, 0x49, 0xcb, 0xe0, 0xba, 0x04, 0x54,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__WayPoint__EXPECTED_HASH = {1, {
    0xaf, 0x6f, 0x3c, 0x9c, 0x30, 0xdb, 0x80, 0xcb,
    0x86, 0x80, 0xf6, 0x0e, 0xf4, 0x0e, 0xc5, 0xe1,
    0x1c, 0x9d, 0x4b, 0x4d, 0x24, 0x6a, 0xa6, 0x64,
    0x47, 0x89, 0x88, 0xf5, 0x09, 0xb9, 0x63, 0x47,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t unique_identifier_msgs__msg__UUID__EXPECTED_HASH = {1, {
    0x1b, 0x8e, 0x8a, 0xca, 0x95, 0x8c, 0xbe, 0xa2,
    0x8f, 0xe6, 0xef, 0x60, 0xbf, 0x6c, 0x19, 0xb6,
    0x83, 0xc9, 0x7a, 0x9e, 0xf6, 0x0b, 0xb3, 0x47,
    0x52, 0x06, 0x7d, 0x0f, 0x2f, 0x7a, 0xb4, 0x37,
  }};
#endif

static char geographic_msgs__srv__GetGeographicMap__TYPE_NAME[] = "geographic_msgs/srv/GetGeographicMap";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geographic_msgs__msg__BoundingBox__TYPE_NAME[] = "geographic_msgs/msg/BoundingBox";
static char geographic_msgs__msg__GeoPoint__TYPE_NAME[] = "geographic_msgs/msg/GeoPoint";
static char geographic_msgs__msg__GeographicMap__TYPE_NAME[] = "geographic_msgs/msg/GeographicMap";
static char geographic_msgs__msg__KeyValue__TYPE_NAME[] = "geographic_msgs/msg/KeyValue";
static char geographic_msgs__msg__MapFeature__TYPE_NAME[] = "geographic_msgs/msg/MapFeature";
static char geographic_msgs__msg__WayPoint__TYPE_NAME[] = "geographic_msgs/msg/WayPoint";
static char geographic_msgs__srv__GetGeographicMap_Event__TYPE_NAME[] = "geographic_msgs/srv/GetGeographicMap_Event";
static char geographic_msgs__srv__GetGeographicMap_Request__TYPE_NAME[] = "geographic_msgs/srv/GetGeographicMap_Request";
static char geographic_msgs__srv__GetGeographicMap_Response__TYPE_NAME[] = "geographic_msgs/srv/GetGeographicMap_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char unique_identifier_msgs__msg__UUID__TYPE_NAME[] = "unique_identifier_msgs/msg/UUID";

// Define type names, field names, and default values
static char geographic_msgs__srv__GetGeographicMap__FIELD_NAME__request_message[] = "request_message";
static char geographic_msgs__srv__GetGeographicMap__FIELD_NAME__response_message[] = "response_message";
static char geographic_msgs__srv__GetGeographicMap__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetGeographicMap__FIELDS[] = {
  {
    {geographic_msgs__srv__GetGeographicMap__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__srv__GetGeographicMap_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__srv__GetGeographicMap_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__srv__GetGeographicMap_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetGeographicMap__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__BoundingBox__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeographicMap__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__MapFeature__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__WayPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__srv__GetGeographicMap__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetGeographicMap__TYPE_NAME, 36, 36},
      {geographic_msgs__srv__GetGeographicMap__FIELDS, 3, 3},
    },
    {geographic_msgs__srv__GetGeographicMap__REFERENCED_TYPE_DESCRIPTIONS, 13, 13},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__BoundingBox__EXPECTED_HASH, geographic_msgs__msg__BoundingBox__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__BoundingBox__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeographicMap__EXPECTED_HASH, geographic_msgs__msg__GeographicMap__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geographic_msgs__msg__GeographicMap__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__KeyValue__EXPECTED_HASH, geographic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geographic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__MapFeature__EXPECTED_HASH, geographic_msgs__msg__MapFeature__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geographic_msgs__msg__MapFeature__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__WayPoint__EXPECTED_HASH, geographic_msgs__msg__WayPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geographic_msgs__msg__WayPoint__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = geographic_msgs__srv__GetGeographicMap_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = geographic_msgs__srv__GetGeographicMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = geographic_msgs__srv__GetGeographicMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char geographic_msgs__srv__GetGeographicMap_Request__FIELD_NAME__url[] = "url";
static char geographic_msgs__srv__GetGeographicMap_Request__FIELD_NAME__bounds[] = "bounds";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetGeographicMap_Request__FIELDS[] = {
  {
    {geographic_msgs__srv__GetGeographicMap_Request__FIELD_NAME__url, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap_Request__FIELD_NAME__bounds, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__msg__BoundingBox__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetGeographicMap_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geographic_msgs__msg__BoundingBox__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__srv__GetGeographicMap_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetGeographicMap_Request__TYPE_NAME, 44, 44},
      {geographic_msgs__srv__GetGeographicMap_Request__FIELDS, 2, 2},
    },
    {geographic_msgs__srv__GetGeographicMap_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&geographic_msgs__msg__BoundingBox__EXPECTED_HASH, geographic_msgs__msg__BoundingBox__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geographic_msgs__msg__BoundingBox__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char geographic_msgs__srv__GetGeographicMap_Response__FIELD_NAME__success[] = "success";
static char geographic_msgs__srv__GetGeographicMap_Response__FIELD_NAME__status[] = "status";
static char geographic_msgs__srv__GetGeographicMap_Response__FIELD_NAME__map[] = "map";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetGeographicMap_Response__FIELDS[] = {
  {
    {geographic_msgs__srv__GetGeographicMap_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap_Response__FIELD_NAME__map, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__msg__GeographicMap__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetGeographicMap_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__BoundingBox__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeographicMap__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__MapFeature__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__WayPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__srv__GetGeographicMap_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetGeographicMap_Response__TYPE_NAME, 45, 45},
      {geographic_msgs__srv__GetGeographicMap_Response__FIELDS, 3, 3},
    },
    {geographic_msgs__srv__GetGeographicMap_Response__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__BoundingBox__EXPECTED_HASH, geographic_msgs__msg__BoundingBox__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__BoundingBox__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeographicMap__EXPECTED_HASH, geographic_msgs__msg__GeographicMap__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geographic_msgs__msg__GeographicMap__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__KeyValue__EXPECTED_HASH, geographic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geographic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__MapFeature__EXPECTED_HASH, geographic_msgs__msg__MapFeature__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geographic_msgs__msg__MapFeature__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__WayPoint__EXPECTED_HASH, geographic_msgs__msg__WayPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geographic_msgs__msg__WayPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char geographic_msgs__srv__GetGeographicMap_Event__FIELD_NAME__info[] = "info";
static char geographic_msgs__srv__GetGeographicMap_Event__FIELD_NAME__request[] = "request";
static char geographic_msgs__srv__GetGeographicMap_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetGeographicMap_Event__FIELDS[] = {
  {
    {geographic_msgs__srv__GetGeographicMap_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {geographic_msgs__srv__GetGeographicMap_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {geographic_msgs__srv__GetGeographicMap_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetGeographicMap_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__BoundingBox__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeographicMap__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__MapFeature__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__WayPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeographicMap_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__srv__GetGeographicMap_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetGeographicMap_Event__TYPE_NAME, 42, 42},
      {geographic_msgs__srv__GetGeographicMap_Event__FIELDS, 3, 3},
    },
    {geographic_msgs__srv__GetGeographicMap_Event__REFERENCED_TYPE_DESCRIPTIONS, 12, 12},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__BoundingBox__EXPECTED_HASH, geographic_msgs__msg__BoundingBox__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__BoundingBox__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeographicMap__EXPECTED_HASH, geographic_msgs__msg__GeographicMap__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geographic_msgs__msg__GeographicMap__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__KeyValue__EXPECTED_HASH, geographic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geographic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__MapFeature__EXPECTED_HASH, geographic_msgs__msg__MapFeature__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geographic_msgs__msg__MapFeature__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__WayPoint__EXPECTED_HASH, geographic_msgs__msg__WayPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geographic_msgs__msg__WayPoint__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = geographic_msgs__srv__GetGeographicMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = geographic_msgs__srv__GetGeographicMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This service requests a region of a geographic map.\n"
  "\n"
  "string url            # where to read map data\n"
  "\n"
  "# Bounding box for the desired map.  If all zeros, provide all data\n"
  "# available from the specified URL.\n"
  "BoundingBox bounds\n"
  "\n"
  "---\n"
  "\n"
  "bool success          # true if the call succeeded\n"
  "string status         # more details\n"
  "\n"
  "# The requested map, its bounds may differ from the requested bounds.\n"
  "GeographicMap map";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetGeographicMap__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetGeographicMap__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 409, 409},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetGeographicMap_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetGeographicMap_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetGeographicMap_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetGeographicMap_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetGeographicMap_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetGeographicMap_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetGeographicMap__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[14];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 14, 14};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetGeographicMap__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__BoundingBox__get_individual_type_description_source(NULL);
    sources[3] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    sources[4] = *geographic_msgs__msg__GeographicMap__get_individual_type_description_source(NULL);
    sources[5] = *geographic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[6] = *geographic_msgs__msg__MapFeature__get_individual_type_description_source(NULL);
    sources[7] = *geographic_msgs__msg__WayPoint__get_individual_type_description_source(NULL);
    sources[8] = *geographic_msgs__srv__GetGeographicMap_Event__get_individual_type_description_source(NULL);
    sources[9] = *geographic_msgs__srv__GetGeographicMap_Request__get_individual_type_description_source(NULL);
    sources[10] = *geographic_msgs__srv__GetGeographicMap_Response__get_individual_type_description_source(NULL);
    sources[11] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[12] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[13] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetGeographicMap_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetGeographicMap_Request__get_individual_type_description_source(NULL),
    sources[1] = *geographic_msgs__msg__BoundingBox__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetGeographicMap_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetGeographicMap_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__BoundingBox__get_individual_type_description_source(NULL);
    sources[3] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    sources[4] = *geographic_msgs__msg__GeographicMap__get_individual_type_description_source(NULL);
    sources[5] = *geographic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[6] = *geographic_msgs__msg__MapFeature__get_individual_type_description_source(NULL);
    sources[7] = *geographic_msgs__msg__WayPoint__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[9] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetGeographicMap_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[13];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 13, 13};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetGeographicMap_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__BoundingBox__get_individual_type_description_source(NULL);
    sources[3] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    sources[4] = *geographic_msgs__msg__GeographicMap__get_individual_type_description_source(NULL);
    sources[5] = *geographic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[6] = *geographic_msgs__msg__MapFeature__get_individual_type_description_source(NULL);
    sources[7] = *geographic_msgs__msg__WayPoint__get_individual_type_description_source(NULL);
    sources[8] = *geographic_msgs__srv__GetGeographicMap_Request__get_individual_type_description_source(NULL);
    sources[9] = *geographic_msgs__srv__GetGeographicMap_Response__get_individual_type_description_source(NULL);
    sources[10] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[11] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[12] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
