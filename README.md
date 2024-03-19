# Peoject-1-c_game
cmake project examples
    C_GAME_PROJECT START
        -git repository 설정
        -.gitignore 생성
    - doxygen 세팅
        - sudo apt install doxygen graphviz
        - sudo apt install doxygen-gui
        - sudo apt install qt5
        - unset GTK_PATH
    cmake 배포 설정
    - install 명령어 사용
    - cpack 설정
    Tetris 게임설계
        -signal 60hz로 update함수가 실행되게 make
        -getch 함수로 실시간 키보드 입력
        -게임판
        -블록
        -블록 회전
        -블록 이도
        -블록 떨어짐
        -블록 삭제
        -블록 생성
        -게임 오버
    project start
    Doxyfile 세팅
    README.md 작성
    .gitignore 추가
    .vscode/ 추가
        tasks.json
        launch.json
        settings.json
        c_cpp_properties.json
    참고 사이트 :
        https://blog.naver.com/hardinge/220515010763
    파일 분할 하기
        메인 함수: tetrisV01.c
        화면 출력 함수: display_menu.c, display_tetris.c
        파일 출력 함수: result.c
        게임 로직 함수: update.c
        그림 링크 update.png Update Image collision Image
        키 인식 함수: getch.c
    cmakefiles 작성
        폴내 내의 모든 소스 파일 인식
            file(GLOB SRC_FILES "*.c")
        실행 파일 인스톨 설정
            install(TARGETS tetrisV01 DESTINATION /usr/local/bin)
        헤더 및 소스 파일 인스톨 설정
            install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION /usr/local/include)
            install(DIRECTORY ${CMAKE_SOURCE_DIR}/src/ DESTINATION /usr/local/src FILES_MATCHING PATTERN "*.c")
        오브젝트 파일은 라이브러리 배포가 아니기 때문에 생략
