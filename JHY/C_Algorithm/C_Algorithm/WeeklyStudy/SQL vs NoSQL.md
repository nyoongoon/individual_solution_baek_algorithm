#  SQL vs NoSQL

SQL

데이터가 테이블의 형태로 표현. 모두가 동일한 질의어를 받음(SQL)

어떤 데이터를 원하는가.

구조(스키마)가 잘 잡혀있ㅇ므로 서치가 빠름. 

데이터 구성의 제약이 있음. 데이터가 순수하다.

로우 저장에 특화 

데이터 변경 오류를 db안에서 다 처리해줌.

매우 견고.. 

NoSQL 

컬럼 저장의 문제. 복잡함을 없애자.

object로 저장.

확장의 용이함..?

비정형 데이터를 다루는데 특화..

- 복잡한 스키마 ㄴㄴ
- 문서 정리보단 저장을 하는것에 중점.
- 일반적으로 JSON파일을 빠르게 저장하는 것.
- SQL은 데이터베이스의 구조가 정해져있지만, NoSQL은 json파일을 넣고 필요할때만 딱 갖고오면 됨.
- 데이터으 ㅣ구조가 다라도 같은 컬렉션에 넣을 수 있다.
- 
1. Document DB

    ex) Mongo DB. 

    - data를 json형식으로 저장.
2. Key Value DB

    ex) Casandra DB, Dynamo DB

    - Casandra DB

        → column wide database. 읽고 쓰기가 매우 빠름.

        → Netflix , insta , uber etc..

        ⇒ 많은 양의 데이터를 읽고 써야할때 필요함! 

    - Dynamo DB
        - 서버리스, 분산 key value DB
        - 아마존이 만듦.
        - 쥰내 많은 양의 읽기 지원.
        - Duolingo(외국어 앱)
3. Graph DB

    ex) column이나 documnet가 필요없을 때..

    - 노드 사이 관계가 중요.
    - 페북 같은거..
    - document , column에 저장.
    - 각각 node 연결.
