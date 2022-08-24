# 해쉬 구조
# Hash Table: 키(key)에 데이터(value)를 저장하는 데이터 구조
# key를 통해서 바로 데이터를 불러올 수 있으므로, 속도가 획기적으로 빨라짐
# 파이썬 딕셔너리(Dictionary) 타입이 해쉬 테이블의 예: Key를 가지고 바로 데이터를 꺼냄
# 보틍 배열로 미리 hash table 사이즈만큼 생성 후에 사용

# * 해시 테이블 만들기

# 슬롯 만들기
hash_table = [0 for _ in range(10)]

# 해시 함수 만들기
def hash_func(key):
    return key % 5


data1 = "Andy"
data2 = "Dave"
data3 = "Trump"

# data 키 값을 데이터 첫 인덱스 값의 아스키 넘버의 키값으로 설정
# 키 값으로 해시 주소를 생성
hash_func(ord(data1[0]))


def storage_data(data, value):
    key = ord(data[0])
    hash_address = hash_func(key)
    hash_table[hash_address] = value


storage_data("Andy", "01022223333")
storage_data("Dave", "01044443333")
storage_data("Trump", "01055553333")

# 데이터 가져오기
def get_data(data):
    key = ord(data[0])
    hash_address = hash_func(key)
    return hash_table[hash_address]


print(get_data("Andy"))

"""
장점
    1. 데이터 저장/읽기 속도가 빠르다(검색 속도가 빠르다)
    2. 해쉬는 키에 대한 데이터가 있는지(중복) 확인이 쉬움

단점
    1. 일반적으로 저장공간이 좀 더 필요하다
    2. 여러 키에 해당하는 주소가 같을 경우 충돌을 방지하기 위한 별도의 자료구조가 필요하다

주요용도
    1. 검색이 많이 필요한 경우
    2. 저장, 삭제, 읽기가 빈번한 경우
    3. 캐쉬 구현시(중복 확인이 쉽기 때문에)
"""
